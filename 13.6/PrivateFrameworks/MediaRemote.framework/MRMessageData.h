//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRProtocolMessage, NSData;

__attribute__((visibility("hidden")))
@interface MRMessageData : NSObject
{
    NSData *_data;
    MRProtocolMessage *_message;
    CDUnknownBlockType _dataBlock;
    long long _readPosition;
}

- (void).cxx_destruct;
@property(nonatomic) long long readPosition; // @synthesize readPosition=_readPosition;
@property(readonly, nonatomic) _Bool canPurge;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
@property(readonly, nonatomic) MRProtocolMessage *message;
@property(readonly, nonatomic) NSData *data;
- (id)initWithMessage:(id)arg1 createDataBlock:(CDUnknownBlockType)arg2;

@end

