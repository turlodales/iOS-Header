//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray;
@protocol _MFSearchResultsConsumer;

@interface _MFSearchAddResultsOperation : NSOperation
{
    id <_MFSearchResultsConsumer> _consumer;
    unsigned long long _type;
    NSArray *_results;
}

+ (id)operationWithResults:(id)arg1 ofType:(unsigned long long)arg2 consumer:(id)arg3;
- (void).cxx_destruct;
- (void)main;

@end

