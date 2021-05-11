    <div class="tip" name="19">
      You can use the <code>-h hostname</code> or <code>--hostname
      hostname</code> flag to provide the directory the server is
      writing the into, instead of providing a hostname.
      <pre><code class=
      "hljs bash">laetitia:~$ sudo grep unix_socket_directories /usr/local/pgsql/data/postgresql.conf
unix_socket_directories = '/tmp'       # comma-separated list of directories
laetitia:~$ psql -h /tmp
psql (14devel)
Type "help" for help.

laetitia=# \q</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
