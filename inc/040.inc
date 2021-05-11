    <div class="tip" name="40">
      If you don't want psql to issue a password prompt, use the
      <code>-w</code> or <code>--no-password</code> flag. Should a
      password be needed, the connection attemp will fail. This is
      useful in batch jobs and scripts where no user is present to
      enter a password.
      <pre><code class=
      "hljs bash">laetitia:~$ sudo cat /usr/local/pgsql/data/pg_hba.conf
# TYPE  DATABASE        USER            ADDRESS                 METHOD

local   postgres       laetitia                                 scram-sha-256
# "local" is for Unix domain socket connections only
local   all             all                                     trust
# IPv4 local connections:
host    all             all             127.0.0.1/32            trust
# IPv6 local connections:
host    all             all             ::1/128                 trust
# Allow replication connections from localhost, by a user with the
# replication privilege.
local   replication     all                                     trust
host    replication     all             127.0.0.1/32            trust
host    replication     all             ::1/128                 trust
laetitia:~$ psql postgres -w
psql: error: connection to server on socket "/tmp/.s.PGSQL.5432" failed: fe_sendauth: no password supplied</code></pre>This
feature is available since at least Postgres 7.1.
    </div>
