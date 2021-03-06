//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVContentKeySession, NSData, NSDictionary, NSError, NSString;

__attribute__((visibility("hidden")))
@interface AVContentKeyRequestInternal : NSObject
{
    AVContentKeySession *session;
    id identifier;
    NSData *keyIDFromInitializationData;
    NSData *initializationData;
    long long status;
    int responseInfoSent;
    _Bool providesPersistableKey;
    NSDictionary *preloadingRequestOptions;
    struct OpaqueFigCPECryptor *figCryptor;
    NSError *error;
    struct __CFDictionary *requestInfo;
    unsigned long long customURLRequestID;
    struct OpaqueFigCustomURLHandler *customURLHandler;
    _Bool isRenewalRequest;
    NSString *cryptorUUID;
    unsigned long long cryptorKeyRequestID;
}

@end

