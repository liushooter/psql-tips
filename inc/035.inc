    <div class="tip" name="35">
      The user psql will try to connect with is in order:
      <ul>
        <li>the user provided with the <code>-U username</code> or
        <code>--username=username</code></li>
        <li>the value of the $PGUSER environment variable, if
        set</li>
        <li>the name of the OS user</li>
      </ul>
      <pre><code class="hljs bash">laetitia:~$ psql -U postgres
psql (14devel)
Type "help" for help.

postgres=# \conninfo
You are connected to database "postgres" as user "postgres" via socket in "/tmp" at port "5432".
postgres=# \q
laetitia:~$ export PGUSER=postgres
laetitia:~$ psql
psql (14devel)
Type "help" for help.

postgres=# \conninfo
You are connected to database "postgres" as user "postgres" via socket in "/tmp" at port "5432".
postgres=# \q
laetitia:~$ unset PGUSER
laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \conninfo
You are connected to database "laetitia" as user "laetitia" via socket in "/tmp" at port "5432".</code></pre>This
feature is available since at least Postgres 7.1.
    </div>
