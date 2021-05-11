    <div class="tip" name="10">
      You can use the result of another command as an input for
      psql using the <code>|</code> character.
      <pre><code class="hljs bash">laetitia:~$ cat query.sql
select * from test;
laetitia:~$ cat query.sql | psql
 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
