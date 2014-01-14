#
# Regular cron jobs for the btk-core package
#
0 4	* * *	root	[ -x /usr/bin/btk-core_maintenance ] && /usr/bin/btk-core_maintenance
