import yaml
with open(r'C:\Users\yotam\projects\gunship_2000\registry\GS_GS2.yaml') as f:
    data = yaml.safe_load(f)
funcs = data.get('functions', [])
for i, f in enumerate(funcs):
    if f.get('addr') in ('10bf:0518', '10bf:049a'):
        print('Index', i, 'addr=', f.get('addr'), 'name=', f.get('name'), 'status=', f.get('status'), 'auto=', f.get('auto_name'))