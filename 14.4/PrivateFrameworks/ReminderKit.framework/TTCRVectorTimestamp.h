//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/TTVectorTimestamp.h>

@class CRVectorTimestamp;

@interface TTCRVectorTimestamp : TTVectorTimestamp
{
    CRVectorTimestamp *_crTimestamp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CRVectorTimestamp *crTimestamp; // @synthesize crTimestamp=_crTimestamp;
- (id)sortedUUIDs;
- (id)allUUIDs;
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;
- (unsigned long long)subclockForUUID:(id)arg1;
- (unsigned long long)clockForUUID:(id)arg1;
- (id)clockElementForUUID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

