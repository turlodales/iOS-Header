//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SeymourUI/_TtC9SeymourUI35TVRootShowcaseCarouselContainerCell.h>

#import <SeymourUI/SMUTVCarouselViewDataSource-Protocol.h>
#import <SeymourUI/SMUTVCarouselViewDelegate-Protocol.h>

@interface _TtC9SeymourUI35TVRootShowcaseCarouselContainerCell (SeymourUI) <SMUTVCarouselViewDataSource, SMUTVCarouselViewDelegate>
- (id)carouselView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInCarouselView:(id)arg1;
- (void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)carouselView:(id)arg1 didCenterItemAtIndex:(long long)arg2;
- (long long)indexForPreferredCenteredViewInCarouselView:(id)arg1;
@end

