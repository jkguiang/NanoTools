#include <iostream>

using namespace std;


void MakeTable(TString tfile_path) {
    cout << "------------------------" << endl;
    cout << tfile_path << endl;
    // Load file
    TFile* tfile = new TFile(tfile_path, "UPDATE");
    // Get hists
    TH1F* init_genparts_hist = (TH1F*) tfile->Get("init_genparts");
    TH1F* init_genparts_SR_hist = (TH1F*) tfile->Get("init_genparts_SR");
    // Define types
    auto GetType = [](int type) {
        if (type == 0) { return "gluons"; }
        else if (type == 1) { return "light quarks"; }
        else if (type == 2) { return "top quarks"; }
        else if (type == 3) { return "W bosons"; }
        else if (type == 4) { return "Z bosons"; }
        else if (type == 5) { return "other"; }
        else { return "none"; }
    };
    // Normalize
    int n_events = init_genparts_hist->Integral();
    int n_SR_events = init_genparts_SR_hist->Integral();
    init_genparts_hist->Scale(1./n_events);
    init_genparts_SR_hist->Scale(1./n_SR_events);
    // Print fractions
    cout << "Fractions (out of " << n_events << " events):" << endl;
    for (unsigned int i = 1; i < init_genparts_hist->GetNbinsX()+1; i++) {
        cout << init_genparts_hist->GetBinContent(i) << " are " << GetType(i-1) << endl;
    }
    cout << endl;
    // Print SR fractions
    cout << "SR Fractions (out of " << n_SR_events << " events):" << endl;
    for (unsigned int i = 1; i < init_genparts_SR_hist->GetNbinsX()+1; i++) {
        cout << init_genparts_SR_hist->GetBinContent(i) << " are " << GetType(i-1) << endl;
    }
    cout << "------------------------" << endl;
    return;
}

void MakePlot(TString tfile_path, TString var_name, TString xlabel, TString title, 
              TString year, int rebin=1) {
    // Load file
    TFile* tfile = new TFile(tfile_path, "UPDATE");
    // Get hists
    TH1F* init_genquark_hist = (TH1F*) tfile->Get("init_genquark_"+var_name);
    TH1F* init_gengluon_hist = (TH1F*) tfile->Get("init_gengluon_"+var_name);
    // Normalize
    init_genquark_hist->Scale(1./init_genquark_hist->Integral());
    init_gengluon_hist->Scale(1./init_gengluon_hist->Integral());
    // Rebin
    init_genquark_hist->Rebin(rebin);
    init_gengluon_hist->Rebin(rebin);
    // Set up canvas
    TCanvas* tcanvas = new TCanvas("tcanvas", "tcanvas");
    tcanvas->cd();
    tcanvas->SetRightMargin(0.09);
    tcanvas->SetLeftMargin(0.15);
    tcanvas->SetBottomMargin(0.15);
    // Style
    init_genquark_hist->Draw("HIST");
    init_genquark_hist->SetStats(0); // No statistics on upper plot
    init_genquark_hist->SetTitle(title);
    init_genquark_hist->GetXaxis()->SetTitle(xlabel);
    init_genquark_hist->GetXaxis()->SetTitleSize(20);
    init_genquark_hist->GetXaxis()->SetTitleFont(43);
    init_genquark_hist->GetYaxis()->SetTitle("Events/Total");
    init_genquark_hist->GetYaxis()->SetTitleSize(20);
    init_genquark_hist->GetYaxis()->SetTitleFont(43);
    init_genquark_hist->SetLineColor(kBlue);
    // Plot
    init_gengluon_hist->Draw("HIST SAME");
    // Style
    init_gengluon_hist->SetLineColor(kRed);
    // Legend
    auto legend = new TLegend(0.9,0.9,0.68,0.8);
    legend->SetHeader(year,"C"); // option "C" allows to center the header
    legend->AddEntry(init_genquark_hist, "hard-scattered quarks", "f");
    legend->AddEntry(init_gengluon_hist, "hard-scattered gluons", "f");
    legend->SetTextSize(0.025);
    legend->Draw();

    // Save to PNG
    tcanvas->SaveAs("plots/"+title+year+"_"+var_name+".pdf");

    return;
}

void PlotSample(TString sample, TString year) {

    TString tfile = "output/InitGenParts_"+sample+year+".root";
    MakeTable(tfile);
    MakePlot(tfile, "pt", "p_{T}", sample, year, 5);
    MakePlot(tfile, "eta", "#eta", sample, year, 2);
    MakePlot(tfile, "phi", "#phi", sample, year, 2);
    MakePlot(tfile, "P", "P", sample, year, 2);
    return;
}

int Plot() {

    PlotSample("TTWJetsToLNu", "2016");
    PlotSample("TTZToLLNuNu", "2016");
    PlotSample("TTWJetsToQQ", "2016");
    PlotSample("TTZToQQ", "2016");

    PlotSample("TTWJetsToLNu", "2017");
    PlotSample("TTZToLLNuNu", "2017");
    PlotSample("TTWJetsToQQ", "2017");
    PlotSample("TTZToQQ", "2017");

    PlotSample("TTWJetsToLNu", "2018");
    PlotSample("TTZToLLNuNu", "2018");
    PlotSample("TTWJetsToQQ", "2018");
    PlotSample("TTZToQQ", "2018");

    return 0;
}
