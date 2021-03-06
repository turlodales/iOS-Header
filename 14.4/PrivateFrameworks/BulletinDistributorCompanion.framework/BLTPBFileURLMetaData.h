//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BLTPBFileURLMetaData : NSObject
{
    NSDictionary *_metadata;
    long long _sequenceNumberError;
    unsigned long long _sessionState;
    NSDictionary *_extraMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *extraMetadata; // @synthesize extraMetadata=_extraMetadata;
@property(readonly, nonatomic) unsigned long long sessionState; // @synthesize sessionState=_sessionState;
@property(readonly, nonatomic) long long sequenceNumberError; // @synthesize sequenceNumberError=_sequenceNumberError;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (id)transportData;
- (id)initWithMetadata:(id)arg1 sequenceNumberManager:(id)arg2;
- (id)initWithSequenceNumberManager:(id)arg1 extraMetadata:(id)arg2;

@end

