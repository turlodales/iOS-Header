//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SidebarOutlineCell.h"

@protocol SectionHeaderOutlineCellModel;

__attribute__((visibility("hidden")))
@interface SectionHeaderOutlineCell : SidebarOutlineCell
{
    id <SectionHeaderOutlineCellModel> _cellModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SectionHeaderOutlineCellModel> cellModel; // @synthesize cellModel=_cellModel;
- (void)_accessoryButtonTapped:(id)arg1;
- (void)_hoverGestureRecognizerStateDidChange:(id)arg1;
- (void)_updateAccessoryConfigurations;
- (void)setHovering:(_Bool)arg1;
- (void)_updateFromModel:(_Bool)arg1;

@end

