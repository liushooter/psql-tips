    <div class="tip" name="15">
      The database psql will try to connect to is in order:
      <ul>
        <li>the database name provided with the <code>-d</code> or
        <code>--dbname</code> flag</li>
        <li>the first parameter not linked to a flag if the
        <code>-d</code> or <code>--dbname</code> is not set</li>
        <li>the value of the $PGDATABASE environment variable, if
        set</li>
        <li>the same as the name of the user who's trying to
        connect</li>
      </ul>
      <pre><code class="hljs bash">laetitia:~$ psql -d test
psql (14devel)
Type "help" for help.

test=# \q
laetitia:~$ psql test
psql (14devel)
Type "help" for help.

test=# \q
laetitia:~$ export PGDATABASE=test
laetitia:~$ psql
psql (14devel)
Type "help" for help.

test=# \q
laetitia:~$ unset PGDATABASE
laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=#</code></pre>This feature is available since iat least
Postgres 7.1.
    </div>
