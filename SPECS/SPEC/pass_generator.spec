Name: pass_generator
Version: 1.0
Release: 1%{?dist}
Summary: Programm, generating passwords
Group: Test
License: GPL
URL: https://github.com/Tatk/PasswordGenerator
Source: %{name}-%{version}.tar.gz
BuildRoot: /tmp/%{name}

%description
If you want generate passwords use tis programm.

%prep
%setup -c %{name}


%build
make

%install
mkdir -p $RPM_BUILD_ROOT/usr/bin
cp %{name} $RPM_BUILD_ROOT/usr/bin

%clean
rm -rf $RPM_BUILD_ROOT

%files
/usr/bin/%{name}

%attr(0755,root,root)/usr/bin/%{name}

%changelog
* Fri May 31 2013 Kirichenko
- Added /usr/bin/pass_generator
