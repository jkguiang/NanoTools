def skip(line, cell=None):
    if eval(line):
        return
    get_ipython().ex(cell)

def load_ipython_extension(shell):
    shell.register_magic_function(skip,'line_cell')

def unload_ipython_extension(shell):
    del shell.magics_manager.magics['cell']['skip']
