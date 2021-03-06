//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class HMFBoolean, NSBundle, NSString, NSURL;

@interface HMFProcessInfo : HMFObject <HMFLogging>
{
    CDStruct_6ad76789 *_auditToken;
    NSString *_applicationIdentifier;
    int _identifier;
    NSString *_name;
    NSURL *_executableURL;
    NSURL *_mainBundleURL;
}

+ (id)logCategory;
+ (id)processInfoForXPCConnection:(id)arg1;
+ (id)processInfo;
- (void).cxx_destruct;
@property(readonly, copy) NSURL *mainBundleURL; // @synthesize mainBundleURL=_mainBundleURL;
@property(readonly, copy) NSURL *executableURL; // @synthesize executableURL=_executableURL;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly) int identifier; // @synthesize identifier=_identifier;
- (id)logIdentifier;
- (_Bool)getAuditToken:(CDStruct_6ad76789 *)arg1;
@property(readonly, copy) NSBundle *mainBundle;
- (id)attributeDescriptions;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithIdentifier:(int)arg1;
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;
- (id)init;
- (id)valueForEntitlement:(id)arg1;
@property(readonly, copy, getter=isPlatformBinary) HMFBoolean *platformBinary;
@property(readonly, copy, getter=isCodeSigned) HMFBoolean *codeSigned;
@property(readonly, copy) NSString *applicationIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

