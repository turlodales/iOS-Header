//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSModeAssertionStoreRecordDictionaryEncoding-Protocol.h>

@class DNDSModeAssertionInvalidationDetailsRecord, DNDSModeAssertionRecord, DNDSModeAssertionSourceRecord, NSNumber, NSString;

@interface DNDSModeAssertionInvalidationRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>
{
    DNDSModeAssertionRecord *_assertion;
    NSNumber *_invalidationDate;
    DNDSModeAssertionInvalidationDetailsRecord *_details;
    DNDSModeAssertionSourceRecord *_source;
    NSString *_reason;
    NSString *_reasonOverride;
}

+ (id)recordForInvalidation:(id)arg1;
+ (id)recordForDictionary:(id)arg1 keys:(const CDStruct_0a6492a9 *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reasonOverride; // @synthesize reasonOverride=_reasonOverride;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) DNDSModeAssertionSourceRecord *source; // @synthesize source=_source;
@property(retain, nonatomic) DNDSModeAssertionInvalidationDetailsRecord *details; // @synthesize details=_details;
@property(retain, nonatomic) NSNumber *invalidationDate; // @synthesize invalidationDate=_invalidationDate;
@property(retain, nonatomic) DNDSModeAssertionRecord *assertion; // @synthesize assertion=_assertion;
- (id)object;
- (id)dictionaryWithKeys:(const CDStruct_0a6492a9 *)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

