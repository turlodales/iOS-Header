//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSFeedModuleType-Protocol.h"

@protocol FRFeldsparContext;

@interface FRFeedModule : NSObject <TSFeedModuleType>
{
    id <FRFeldsparContext> _feldsparContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (id)createViewControllerForFeedDescriptor:(id)arg1 feedViewContext:(id)arg2;
- (id)initWithFeldsparContext:(id)arg1;

@end

