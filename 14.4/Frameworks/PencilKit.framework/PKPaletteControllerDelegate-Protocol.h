//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKPaletteController, UITraitCollection;

@protocol PKPaletteControllerDelegate <NSObject>
- (void)paletteControllerFloatingKeyboardWillHide:(PKPaletteController *)arg1;
- (void)paletteControllerFloatingKeyboardWillShow:(PKPaletteController *)arg1;

@optional
- (_Bool)paletteController:(PKPaletteController *)arg1 shouldOverridePaletteViewTraitCollectionTo:(UITraitCollection *)arg2;
@end

