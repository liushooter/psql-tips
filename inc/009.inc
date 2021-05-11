    <div class="tip" name="9">
      You can give queries to psql from the standard input using
      <code>&lt; filename</code>.
      <pre><code class="hljs bash">laetitia:~$ cat query.sql
select * from test;
laetitia:~$ psql &lt; query.sql
 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
