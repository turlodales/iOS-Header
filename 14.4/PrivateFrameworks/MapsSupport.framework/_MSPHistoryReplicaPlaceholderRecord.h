//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPHistoryReplicaRecord-Protocol.h>
#import <MapsSupport/NSSecureCoding-Protocol.h>

@class MSPVectorTimestamp, NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _MSPHistoryReplicaPlaceholderRecord : NSObject <MSPHistoryReplicaRecord, NSSecureCoding>
{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
    NSDate *_modificationDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // @synthesize contentsTimestamp=_contentsTimestamp;
@property(readonly, copy, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 modificationDate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

