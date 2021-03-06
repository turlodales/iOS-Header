//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate;

@interface CKPublicKey : NSObject
{
    NSData *_publicKey;
    long long _version;
    NSDate *_expiration;
    NSData *_certData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *certData; // @synthesize certData=_certData;
@property(readonly, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
- (_Bool)hasExpired;
- (id)initWithPublicKey:(id)arg1 version:(long long)arg2 expiration:(id)arg3 certificateData:(id)arg4;

@end

