    <div class="tip" name="36">
      Long options can take a value with or without the equal sign.
      <pre><code class=
      "hljs bash">laetitia:~$ psql --dbname laetitia
psql (14devel)
Type "help" for help.

laetitia=# \q
laetitia:~$ psql --dbname=laetitia
psql (14devel)
Type "help" for help.

laetitia=#</code></pre>This feature is available since Postgres
9.1.
    </div>
