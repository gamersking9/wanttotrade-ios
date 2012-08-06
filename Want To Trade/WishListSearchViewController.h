//
//  WishListSearchViewController.h
//  Want To Trade
//
//  Created by Sam  on 8/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WishListSearchViewController : UITableViewController<UISearchBarDelegate, NSURLConnectionDelegate> {
    IBOutlet UISearchBar *seachBar;
    NSMutableArray *searchList;
    NSInteger selectedIndex;
    BOOL searching;
    BOOL letUserSelectRow;
    NSString *responseString;
    NSMutableData *receivedData;
}

@property (nonatomic, retain) NSMutableArray *searchList;
@property (readwrite) NSInteger selectedIndex;
@property (nonatomic, retain) NSString *responseString;
@property (nonatomic, retain) NSMutableData *receivedData;

@end
