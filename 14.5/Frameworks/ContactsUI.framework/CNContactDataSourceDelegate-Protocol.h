//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@protocol CNContactDataSource;

@protocol CNContactDataSourceDelegate <NSObject>
- (void)contactDataSourceDidChange:(id <CNContactDataSource>)arg1;

@optional
- (void)contactDataSourceDidChangeDisplayName:(id <CNContactDataSource>)arg1;
- (void)contactDataSourceMeContactDidChange:(id <CNContactDataSource>)arg1;
@end

