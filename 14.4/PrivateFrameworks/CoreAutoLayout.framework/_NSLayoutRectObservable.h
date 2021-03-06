//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObservationSource.h>

@class NSArray, NSLayoutRect;
@protocol NSLayoutItem;

__attribute__((visibility("hidden")))
@interface _NSLayoutRectObservable : NSObservationSource
{
    NSArray *_anchorObservations;
    NSLayoutRect *_rectangle;
    id <NSLayoutItem> _layoutItem;
}

+ (id)observableForRect:(id)arg1 inItem:(id)arg2;
- (void)dealloc;

@end

