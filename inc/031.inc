    <div class="tip" name="31">
      If you want to debug a script, the <code>-s</code> or
      <code>--single-step</code> flag will make psql stop after
      each command.
      <pre><code class="hljs bash">laetitia:~$ cat query.sql 
select count(*) from test;
select * from test;
laetitia:~$ psql -s -f query.sql
***(Single step mode: verify command)*******************************************
select count(*) from test;
***(press return to proceed or enter x and return to cancel)********************

 count 
-------
     1
(1 row)

***(Single step mode: verify command)*******************************************
select * from test;
***(press return to proceed or enter x and return to cancel)********************

 id | value 
----&#43;-------
  1 | test
(1 row)</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
