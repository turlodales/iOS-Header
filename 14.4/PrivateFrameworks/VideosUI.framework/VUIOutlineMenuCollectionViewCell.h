//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UICollectionViewOutlineCell.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIOutlineMenuCollectionViewCell : _UICollectionViewOutlineCell
{
    _Bool _shouldAppearAsHeader;
    NSString *_title;
    NSString *_imageName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAppearAsHeader; // @synthesize shouldAppearAsHeader=_shouldAppearAsHeader;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (void)prepareForReuse;

@end

