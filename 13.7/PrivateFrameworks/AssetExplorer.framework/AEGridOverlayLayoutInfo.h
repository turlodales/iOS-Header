//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetExplorer/AETileLayoutInfo-Protocol.h>

__attribute__((visibility("hidden")))
@interface AEGridOverlayLayoutInfo : NSObject <AETileLayoutInfo>
{
    struct CGSize __gradientImageSize;
}

@property(readonly, nonatomic) struct CGSize _gradientImageSize; // @synthesize _gradientImageSize=__gradientImageSize;
- (struct CGSize)tileSystemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)initWithGradientImageSize:(struct CGSize)arg1;

@end

