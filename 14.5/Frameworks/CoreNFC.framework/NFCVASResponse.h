//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreNFC/NSCopying-Protocol.h>

@class NSData;

@interface NFCVASResponse : NSObject <NSCopying>
{
    long long _status;
    NSData *_vasData;
    NSData *_mobileToken;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSData *mobileToken; // @synthesize mobileToken=_mobileToken;
@property(readonly, retain, nonatomic) NSData *vasData; // @synthesize vasData=_vasData;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStatus:(long long)arg1 data:(id)arg2 mobileToken:(id)arg3;
- (id)init;

@end

