    <div class="tip" name="6">
      You can combine the <code>-c</code> or <code>--command</code>
      flag with the <code>-f</code> or <code>--file</code> flag.
      <pre><code class="hljs bash">laetitia:~$ cat query.sql
select * from test;
laetitia:~$ psql -f query.sql -c 'select count(*) from test;'
 id | value 
----&#43;-------
  1 | test
(1 row)

 count 
-------
     1
(1 row)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
