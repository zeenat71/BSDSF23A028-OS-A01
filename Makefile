install:
	install -d /usr/local/bin /usr/local/share/man/man3
	[ -f bin/client ] && install -m 755 bin/client /usr/local/bin/client || true
	[ -f bin/client_dynamic ] && install -m 755 bin/client_dynamic /usr/local/bin/client_dynamic || true
	install -m 644 man/man3/*.1 /usr/local/share/man/man3 || true
