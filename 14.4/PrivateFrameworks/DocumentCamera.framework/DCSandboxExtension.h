//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentCamera/NSSecureCoding-Protocol.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface DCSandboxExtension : NSObject <NSSecureCoding>
{
    _Bool _canAccessFileURL;
    _Bool _shouldIssueSandboxExtensionWhenEncoding;
    NSURL *_fileURL;
    long long _sandboxExtensionHandle;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
@property(readonly, nonatomic) _Bool shouldIssueSandboxExtensionWhenEncoding; // @synthesize shouldIssueSandboxExtensionWhenEncoding=_shouldIssueSandboxExtensionWhenEncoding;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) _Bool canAccessFileURL; // @synthesize canAccessFileURL=_canAccessFileURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)relinquish;
- (id)initWithFileURL:(id)arg1;

@end

