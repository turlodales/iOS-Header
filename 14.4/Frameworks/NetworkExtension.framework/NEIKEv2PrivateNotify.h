//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying>
{
    unsigned short _notifyStatus;
    NSData *_notifyData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *notifyData; // @synthesize notifyData=_notifyData;
@property(nonatomic) unsigned short notifyStatus; // @synthesize notifyStatus=_notifyStatus;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNotifyStatus:(unsigned short)arg1 notifyData:(id)arg2;

@end

