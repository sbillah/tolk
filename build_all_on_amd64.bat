@echo off
call build_jni
call build_dotnet
call build_python
call build_tolk_on_amd64
call build_zip