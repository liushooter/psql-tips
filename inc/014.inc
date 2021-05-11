    <div class="tip" name="14">
      The <code>-d sometext</code> or
      <code>--dbname=sometext</code> can accept a Keyword/Value
      connection string instead of a dbname.<br>
      See <a href=
      "https://www.postgresql.org/docs/current/libpq-connect.html#LIBPQ-CONNSTRING">
      Postgres documentation</a> for Keyword/Value connection
      strings.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -d "host=localhost port=5432"
psql (14devel)
Type "help" for help.

laetitia=# </code></pre>This feature is available since Postgres
8.3.
    </div>
