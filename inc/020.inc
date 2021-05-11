    <div class="tip" name="20">
      The host psql will try to connect to is in order:
      <ul>
        <li>The hostname/socket directory provided by the
        <code>-c</code> or <code>--command</code></li>
        <li>The $PGHOST environment variable, if set</li>
        <li>The Unix-domain socket used by the local Postgres
        server (if supported)</li>
        <li><code>localhost</code> if Unix-domain socket are not
        supported</li>
      </ul>
      <pre><code class="hljs bash">laetitia:~$ psql -h localhost
psql (14devel)
Type "help" for help.

laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" on host "localhost" (address "::1") at port "5432".
laetitia=# \q
laetitia:~$ psql -h /tmp
psql (14devel)
Type "help" for help.

laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" via socket in "/tmp" at port "5432".
laetitia=# \q
laetitia:~$ export PGHOST=localhost
laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" on host "localhost" (address "::1") at port "5432".
laetitia=# \q
laetitia:~$ unset PGHOST
laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" via socket in "/tmp" at port "5432".
laetitia=# \q</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
