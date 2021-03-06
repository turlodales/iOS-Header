//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFDynamicFormattingValue-Protocol.h>

@class NSString;
@protocol HFStringGenerator;

@interface HFSimpleFormattedValue : NSObject <HFDynamicFormattingValue>
{
    id <HFStringGenerator> _currentFormattedValue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HFStringGenerator> currentFormattedValue; // @synthesize currentFormattedValue=_currentFormattedValue;
- (id)observeFormattedValueChangesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id value;
- (id)initWithFormattedValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

