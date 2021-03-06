//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

@class NSArray, PKAccount, PKAccountService, PKAccountUserCollection, PKFamilyMemberCollection, PKInstallmentPlan, PKPaymentTransactionDetailAmountLineItemGenerator, PKPaymentTransactionDetailHeaderView, PKTransactionSourceCollection;

@interface PKInstallmentPlanDetailsViewController : PKSectionTableViewController
{
    PKAccount *_account;
    PKAccountService *_accountService;
    PKAccountUserCollection *_accountUserCollection;
    PKFamilyMemberCollection *_familyMemberCollection;
    PKInstallmentPlan *_installmentPlan;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKPaymentTransactionDetailAmountLineItemGenerator *_lineItemGenerator;
    NSArray *_lineItems;
    PKPaymentTransactionDetailHeaderView *_headerView;
}

- (void).cxx_destruct;
- (id)_progressCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_detailsCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateHeaderHeight;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 accountService:(id)arg3 accountUserCollection:(id)arg4 familyMemberCollection:(id)arg5 transactionSourceCollection:(id)arg6;

@end

