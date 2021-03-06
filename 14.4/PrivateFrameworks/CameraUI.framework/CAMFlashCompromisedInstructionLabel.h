//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMInstructionLabel.h>

@interface CAMFlashCompromisedInstructionLabel : CAMInstructionLabel
{
    unsigned long long _compromise;
}

+ (id)_textForCompromise:(unsigned long long)arg1;
+ (_Bool)shouldDisplayInstructionForCompromise:(unsigned long long)arg1;
@property(nonatomic) unsigned long long compromise; // @synthesize compromise=_compromise;
- (id)_textColor;
- (id)_symbolPrefixName;
- (void)_updateTextWithPriorCompromise:(unsigned long long)arg1;

@end

