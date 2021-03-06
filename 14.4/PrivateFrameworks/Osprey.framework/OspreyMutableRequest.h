//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface OspreyMutableRequest : NSObject
{
    NSMutableDictionary *_additionalHeaders;
    _Bool _enableDeviceAuthentication;
    _Bool _allowsCellularAccess;
    _Bool _compressionEnabled;
    _Bool _forceHTTPv2;
    NSString *_methodName;
    NSString *_clientTraceIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceHTTPv2; // @synthesize forceHTTPv2=_forceHTTPv2;
@property(nonatomic, getter=isCompressionEnabled) _Bool compressionEnabled; // @synthesize compressionEnabled=_compressionEnabled;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) _Bool enableDeviceAuthentication; // @synthesize enableDeviceAuthentication=_enableDeviceAuthentication;
@property(copy, nonatomic) NSString *clientTraceIdentifier; // @synthesize clientTraceIdentifier=_clientTraceIdentifier;
@property(readonly, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(nonatomic) _Bool requireAbsintheAuthentication;
- (id)buildInternalRequest;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)initWithMethodName:(id)arg1;

@end

