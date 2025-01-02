monitoring_sources = files('''
    monitoring.h

    common.c
    monitoring_senders.c
'''.split())

libmonitoring = library('monitoring',
                        sources : monitoring_sources,
                        install : true)

libmonitoring_dep = declare_dependency(
    link_with : libmonitoring)