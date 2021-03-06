//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactSuggestionViewControllerDataSource-Protocol.h>

@class CNLabeledValue, NSAttributedString, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionViewControllerLabeledValueDataSource : NSObject <CNContactSuggestionViewControllerDataSource>
{
    CNLabeledValue *_labeledValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNLabeledValue *labeledValue; // @synthesize labeledValue=_labeledValue;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *from;
@property(readonly, nonatomic) NSString *date;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSAttributedString *formattedSnippet;
@property(readonly, nonatomic) NSString *appName;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithLabeledValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

