    <div class="tip" name="25">
      The flag <code>-a</code> or <code>--echo-all</code> will
      print all the non empty lines to the standard output.
      <pre><code class="hljs bash">laetitia:~$ cat query.sql 
select count(*) from test;






select * from test;
laetitia:~$ psql -f query.sql -a
select count(*) from test;
 count 
-------
     1
(1 row)

select * from test;
 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
