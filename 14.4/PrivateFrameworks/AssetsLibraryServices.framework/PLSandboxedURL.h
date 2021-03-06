//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface PLSandboxedURL : NSURL
{
    NSString *_sandboxExtensionToken;
    long long _sandboxExtensionHandle;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_commonPLSandboxedURLInitialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initFileURLWithPath:(id)arg1 sandboxExtensionToken:(id)arg2 consume:(_Bool)arg3;
- (id)initWithURL:(id)arg1 sandboxExtensionToken:(id)arg2 consume:(_Bool)arg3;
- (void)_initSandboxExtensionToken:(id)arg1 consume:(_Bool)arg2;

@end

