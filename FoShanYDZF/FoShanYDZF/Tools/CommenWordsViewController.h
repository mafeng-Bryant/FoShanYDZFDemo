//
//  CommenWordsViewController.h
//  EvePad
//
//  Created by chen on 11-4-8.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WordsDelegate
- (void)returnSelectedWords:(NSString *)words andRow:(NSInteger)row;
@end

@interface CommenWordsViewController : UITableViewController {

	NSArray *wordsAry;
}

@property(nonatomic,copy) NSArray *wordsAry;
@property (nonatomic, assign) id <WordsDelegate> delegate;
@end