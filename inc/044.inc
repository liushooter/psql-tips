    <div class="tip" name="44">
      The <code>-1</code> or <code>--single-transaction</code> flag
      will encapsulate all your commands (provided with
      <code>-c</code> or <code>--command</code> or with
      <code>-f</code> or <code>--file</code>) into a single
      transaction with <code>begin</code> and <code>commit</code>
      or <code>rollback</code>.
      <pre><code class="hljs bash">laetitia:~$ cat query.sql
select * from test;
insert into test values ('myvalue');
select * from test;
laetitia:~$ psql -1 -f query.sql -E
********* QUERY **********
BEGIN
**************************

 id | value 
----&#43;-------
  1 | test
(1 row)

psql:query.sql:2: ERROR:  invalid input syntax for type integer: "myvalue"
LINE 1: insert into test values ('myvalue');
                                 ^
psql:query.sql:3: ERROR:  current transaction is aborted, commands ignored until end of transaction block
********* QUERY **********
COMMIT
**************************</code></pre>This feature is available
since Postgres 8.2.
	</div>
