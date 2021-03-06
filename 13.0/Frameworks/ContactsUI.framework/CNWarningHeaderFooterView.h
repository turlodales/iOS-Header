//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactTableViewHeaderFooterView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNWarningHeaderFooterView : CNContactTableViewHeaderFooterView
{
    _Bool _shouldDisplayWarningIcon;
    NSString *_warningText;
}

+ (id)exclamationMark;
@property(retain, nonatomic) NSString *warningText; // @synthesize warningText=_warningText;
@property(nonatomic) _Bool shouldDisplayWarningIcon; // @synthesize shouldDisplayWarningIcon=_shouldDisplayWarningIcon;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)warningAttributedText;

@end

