//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NFLPipeSegment, NFLPipelayerDelegate;

@interface NFLPipelayerInternalSegment : NSObject
{
    unsigned long long _pipeSegmentType;
    unsigned long long _cumulativeHeadlinesUsedCount;
    NSObject<NFLPipeSegment> *_pipeSegment;
    id <NFLPipelayerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NFLPipelayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<NFLPipeSegment> *pipeSegment; // @synthesize pipeSegment=_pipeSegment;
@property(nonatomic) unsigned long long cumulativeHeadlinesUsedCount; // @synthesize cumulativeHeadlinesUsedCount=_cumulativeHeadlinesUsedCount;
@property(nonatomic) unsigned long long pipeSegmentType; // @synthesize pipeSegmentType=_pipeSegmentType;
- (id)description;

@end

