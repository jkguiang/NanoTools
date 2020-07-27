#!/usr/bin/python
import os
os.system('root doAll.C -q -b > output.txt')

def main():
	# Init
	nEventsTotal = 0
	gen_lept_events = 0
	gen_elec_events = 0
	gen_mu_events = 0
	gen_one_and_one = 0
	gen_opp_ch = 0
	lept_events = 0
	elec_events = 0
	mu_events = 0
	one_and_one = 0
	opp_ch = 0
	pass_hlt = 0
	two_btag = 0
	
	# Read Output File
	f = open("output.txt",'r')	
	for line in f:
		if "Total Number of Events" in line:
			nEventsTotal += int(line.split(':')[1])
		elif "Number of Gen Lepton Events" in line:
			gen_lept_events += int(line.split(':')[1])
		elif "Num Gen Elec Events" in line:
			gen_elec_events += int(line.split(':')[1])
		elif "Num Gen Mu Events" in line:
			gen_mu_events += int(line.split(':')[1])
		elif "Num Gen One Elec && One Mu Events" in line:
			gen_one_and_one += int(line.split(':')[1])
		elif "Num Gen Opposite Sign Events" in line:
			gen_opp_ch += int(line.split(':')[1])
		elif "Number of Lepton Events" in line:
			lept_events += int(line.split(':')[1])
		elif "Num Elec Events" in line:
			elec_events += int(line.split(':')[1])
		elif "Num Mu Events" in line:
			mu_events += int(line.split(':')[1])
		elif "Num One Elec && One Mu Events" in line:
			one_and_one += int(line.split(':')[1])
		elif "Num Opposite Sign Events" in line:
			opp_ch += int(line.split(':')[1])
		elif "Num Passed HLTs Events" in line:
			pass_hlt += int(line.split(':')[1])
		elif "Num 2 bTag Events" in line:
			two_btag += int(line.split(':')[1])
	
	f.close()	
	
	print("Total Number of Events")
	print(nEventsTotal)
	print("Number of Gen Lepton Events")
	print(gen_lept_events)
	print("Num Gen Elec Events")
	print(gen_elec_events)
	print("Num Gen Mu Events")
	print(gen_mu_events)
	print("Num Gen One Elec && One Mu Events")
	print(gen_one_and_one)
	print("Num Gen Opposite Sign Events")
	print(gen_opp_ch)
	print("Number of Lepton Events")
	print(lept_events)
	print("Efficiency") 
	print(round(float(lept_events)/float(gen_lept_events),2))
	print("Num Elec Events")
	print(elec_events) 
	print("Efficiency")
	print(round(float(elec_events)/float(gen_elec_events),2))
	print("Num Mu Events")
	print(mu_events)
	print("Efficiency") 
	print(round(float(mu_events)/float(gen_mu_events),2))
	print("Num One Elec && One Mu Events")
	print(one_and_one) 
	print("Efficiency")
	print(round(float(one_and_one)/float(gen_one_and_one),2))
	print("Num Opposite Sign Events")
	print(opp_ch)
	print("Efficiency")
	print(round(float(opp_ch)/float(gen_opp_ch),2))
	print("Num Passed HLTs Events")
	print(pass_hlt)
	print("Num 2 bTag Events")
	print(two_btag)

if __name__ == "__main__":
	main()

os.system('rm output.txt')
