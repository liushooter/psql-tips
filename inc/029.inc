    <div class="tip" name="29">
      The port psql will try to connect to is in order:
      <ul>
        <li>the port provided with the <code>-p</code> or
        <code>--port</code> flag</li>
        <li>the value of the $PGPORT environment variable, if
        set</li>
        <li>The port specified at compile time (usually 5432)</li>
      </ul>
      <pre><code class=
      "hljs bash">laetitia:~$ sudo grep "port =" /usr/local/pgsql/data/postgresql.conf
port = 5433                             # (change requires restart)
laetitia:~$ psql -p 5433
psql (14devel)
Type "help" for help.

laetitia=# \q
laetitia:~$ export PGPORT=5433
laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \q
laetitia:~$ unset PGPORT
laetitia:~$ psql
psql: error: connection to server on socket "/tmp/.s.PGSQL.5432" failed: No such file or directory
        Is the server running locally and accepting connections on that socket?</code></pre>This
feature is available since at least Postgres 7.1.
    </div>
