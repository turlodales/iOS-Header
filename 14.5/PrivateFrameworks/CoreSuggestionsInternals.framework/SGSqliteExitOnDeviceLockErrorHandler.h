//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveSupport/_PASSqliteDefaultErrorHandler.h>

@interface SGSqliteExitOnDeviceLockErrorHandler : _PASSqliteDefaultErrorHandler
{
    int _exitCode;
}

- (void)exitOnErrorIndicatingIOError:(int)arg1;
- (_Bool)handleSqliteError:(int)arg1 error:(id)arg2 onError:(CDUnknownBlockType)arg3 db:(id)arg4;
- (id)initWithExitCode:(int)arg1;

@end

