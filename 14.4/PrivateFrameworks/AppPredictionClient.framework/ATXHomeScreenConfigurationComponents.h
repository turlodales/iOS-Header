//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface ATXHomeScreenConfigurationComponents : NSObject
{
    NSMutableDictionary *_stackForStackedWidgetIdDictionary;
    NSArray *_pinnedWidgets;
    NSArray *_stackedWidgets;
    NSArray *_stacks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *stacks; // @synthesize stacks=_stacks;
@property(readonly, nonatomic) NSArray *stackedWidgets; // @synthesize stackedWidgets=_stackedWidgets;
@property(readonly, nonatomic) NSArray *pinnedWidgets; // @synthesize pinnedWidgets=_pinnedWidgets;
- (id)stackForStackedWidget:(id)arg1;
- (id)initWithConfigurations:(id)arg1;
- (id)init;

@end

